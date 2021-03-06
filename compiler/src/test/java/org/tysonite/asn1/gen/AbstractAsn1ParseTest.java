package org.tysonite.asn1.gen;

import java.io.File;
import java.io.FileFilter;
import java.util.Arrays;
import java.util.Collection;
import org.tysonite.asn1.parser.AsnParser;

public class AbstractAsn1ParseTest {

   private static final String PATH_TO_ASN_FILES = "src/test/resources/javacc";
   protected static AsnParser parser = null;

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
