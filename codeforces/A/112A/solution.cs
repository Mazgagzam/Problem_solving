using System;
class HelloWorld {
  static void Main() {
    string String1 = Console.ReadLine().ToLower();
    string String2 = Console.ReadLine().ToLower();
    Console.WriteLine(string.Compare(String1, String2));
  }
}
