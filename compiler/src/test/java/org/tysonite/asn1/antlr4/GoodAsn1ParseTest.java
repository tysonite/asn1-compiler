package org.tysonite.asn1.antlr4;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.BitSet;
import java.util.Collection;
import org.antlr.v4.runtime.ANTLRErrorListener;
import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.Parser;
import org.antlr.v4.runtime.RecognitionException;
import org.antlr.v4.runtime.Recognizer;
import org.antlr.v4.runtime.atn.ATNConfigSet;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.tree.ParseTreeWalker;
import org.junit.Assert;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

@RunWith(Parameterized.class)
public class GoodAsn1ParseTest extends Antlr4BaseTest {

   private final File file;

   public GoodAsn1ParseTest(File file) {
      this.file = file;
   }

   @Parameters
   public static Collection<File> getGoodAsn1Files() {
      return getAsn1Files(new Filter() {

         public String prefix() {
            return "good-";
         }
      });
   }

   @Test
   public void testGoodAsn1() throws FileNotFoundException, IOException {
      ASN1Lexer lexer = new ASN1Lexer(new ANTLRInputStream(new FileInputStream(file)));
      CommonTokenStream tokens = new CommonTokenStream(lexer);

      ASN1Parser parser = new ASN1Parser(tokens);
      parser.addErrorListener(new ANTLRErrorListener() {
         public void syntaxError(Recognizer<?, ?> recognizer, Object offendingSymbol,
                 int line, int charPositionInLine, String msg, RecognitionException e) {
            Assert.fail("Can't parse ASN.1 file (" + file.getName() + ") at line (" + line
                    + ") and pos (" + charPositionInLine + "): " + ((null != msg) ? msg : ""));
         }

         @Override
         public void reportAmbiguity(Parser recognizer, DFA dfa, int startIndex, int stopIndex,
                 boolean exact, BitSet ambigAlts, ATNConfigSet configs) {
            if (exact) {
               Assert.fail("Can't parse ASN.1 file (" + file.getName() + ")");
            } else {
               System.out.println(file.getName() + " : ambiguity found");
            }
         }

         @Override
         public void reportAttemptingFullContext(Parser recognizer, DFA dfa, int startIndex,
                 int stopIndex, BitSet conflictingAlts, ATNConfigSet configs) {
         }

         @Override
         public void reportContextSensitivity(Parser recognizer, DFA dfa, int startIndex,
                 int stopIndex, int prediction, ATNConfigSet configs) {
         }
      });

      ASN1Parser.ModuleDefinitionContext modDef = parser.moduleDefinition();

      ParseTreeWalker walker = new ParseTreeWalker();
      walker.walk(new ASN1BaseListener(), modDef);
   }
}
