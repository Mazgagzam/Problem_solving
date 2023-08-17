var _ = Console.ReadLine();
int Amount = Console.ReadLine()!.ToLower().ToCharArray().Distinct().Count();
Console.WriteLine(Amount == 26 ? "YES" : "NO");
