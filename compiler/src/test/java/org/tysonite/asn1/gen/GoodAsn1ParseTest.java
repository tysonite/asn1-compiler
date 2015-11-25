package org.tysonite.asn1.gen;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Collection;
import org.junit.Assert;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
import org.tysonite.asn1.parser.AsnParser;
import org.tysonite.asn1.parser.ParseException;
import org.tysonite.asn1.parser.SimpleNode;

@RunWith(Parameterized.class)
public class GoodAsn1ParseTest extends AbstractAsn1ParseTest {

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
   public void testGoodAsn1() {
      try {
         if (null == parser) {
            parser = new AsnParser(new FileInputStream(file));
         } else {
            parser.ReInit(new FileInputStream(file));
         }
      } catch (FileNotFoundException e) {
         Assert.fail("Can't open ASN.1 for test: " + e.getMessage());
      }

      Assert.assertNotNull("ASN.1 parser was not created", parser);
      try {
         parser.Input();
      } catch (ParseException e) {
         Assert.fail("Can't parser ASN.1 file (" + file.getName() + "): " + e.getMessage());
      }

      SimpleNode node = parser.getTreeRootNode();
      Assert.assertNotNull("Can't parser ASN.1 file: " + file.getName(), node);
   }
}
