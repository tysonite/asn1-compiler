package org.tysonite.asn1.antlr4;

import java.io.File;
import java.io.FileFilter;
import java.util.Arrays;
import java.util.Collection;

public class Antlr4BaseTest {

   private static final String PATH_TO_ASN_FILES = "src/test/resources/antlr4";

   protected interface Filter {

      public String prefix();
   }

   protected static Collection<File> getAsn1Files(final Filter f) {
      File resourcesDirectory = new File(PATH_TO_ASN_FILES);
      File[] goodAsn1 = resourcesDirectory.listFiles(new FileFilter() {
         public boolean accept(File pathname) {
            return pathname.isFile() && pathname.getName().endsWith(".asn")
                    && pathname.getName().startsWith(f.prefix());
         }
      });

      return Arrays.asList(goodAsn1);
   }
}
