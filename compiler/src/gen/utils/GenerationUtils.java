package gen.utils;

public final class GenerationUtils {

   public static String asCPPToken(final String token) {
      return token.replace('-', '_');
   }

   /**
    * Do not allow instantiation.
    */
   private GenerationUtils() {
   }
}
