package org.tysonite.asn1.gen.utils;

public class CodeBuilder {

   private StringBuilder builder = null;

   public CodeBuilder() {
      this.builder = new StringBuilder();
   }

   public CodeBuilder newLine() {
      return append('\n');
   }

   public CodeBuilder append(String str) {
      builder.append(str);
      return this;
   }

   public CodeBuilder append(char c) {
      builder.append(c);
      return this;
   }

   public CodeBuilder append(int indent, String str) {
      builder.append(emptyString(indent)).append(str);
      return this;
   }

   public CodeBuilder assign(String str) {
      builder = new StringBuilder(str);
      return this;
   }

   @Override
   public String toString() {
      return builder.toString();
   }

   private String emptyString(int tabsNumber) {
      String s = "";

      if (tabsNumber > 0) {
         String tab = new String(new char[]{' ', ' ', ' '});

         for (int i = 0; i < tabsNumber; ++i) {
            s += tab;
         }
      }
      return s;
   }
}
