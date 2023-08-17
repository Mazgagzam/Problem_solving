var Line = Console.ReadLine()![1..^1].Replace(" ", "");
int Count = 0;
if (Line.Length > 0)
    Count = Line.Split(',').Distinct().Count();
Console.WriteLine(Count);
