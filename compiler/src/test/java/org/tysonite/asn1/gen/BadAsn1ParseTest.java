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

@RunWith(Parameterized.class)
public class BadAsn1ParseTest extends AbstractAsn1ParseTest {

   private final File file;

   public BadAsn1ParseTest(File file) {
      this.file = file;
   }

   @Parameters
   public static Collection<File> getBadAsn1Files() {
      return getAsn1Files(new Filter() {

         public String prefix() {
            return "bad-";
         }
      });
   }

   @Test(expected = ParseException.class)
   public void testBadAsn1() throws ParseException {
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
      parser.Input(); // throws ParseException
   }
}
