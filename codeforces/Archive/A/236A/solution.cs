using System;
using System.Linq;
var Name = Console.ReadLine().ToCharArray().ToHashSet();
Console.WriteLine($"{(Name.Count() % 2 == 1 ? "IGNORE HIM" : "CHAT WITH HER")}!");
