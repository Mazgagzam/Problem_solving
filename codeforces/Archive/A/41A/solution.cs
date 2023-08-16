string Original = Console.ReadLine();

string GivenAnswer = Console.ReadLine();

string ExpectedAnswer = new string(Original.ToCharArray().Reverse().ToArray());

Console.WriteLine(GivenAnswer.Equals(ExpectedAnswer) ? "YES" : "NO");
