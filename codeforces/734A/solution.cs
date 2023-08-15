using System;
using System.Linq;
var Navoshta = Console.ReadLine();
var Results = Console.ReadLine().ToCharArray();
var Alex = Results.Count(x => x == 'A');
var Danon = Results.Count(y => y == 'D');
Console.WriteLine(Alex == Danon ? "Friendship" : (Alex > Danon ? "Anton" : "Danik"));
