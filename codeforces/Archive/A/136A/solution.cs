int n = int.Parse(Console.ReadLine());

var p = Console.ReadLine().Split().Select(pi => int.Parse(pi)).ToArray();

var list = new List<int>();

for(var i = 1; i <= n; i++)
{
  list.Add(Array.IndexOf(p, i) + 1);
}

Console.WriteLine(string.Join(" ", list));
