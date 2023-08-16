int t = int.Parse(Console.ReadLine().Split()[1]);

char[] s = Console.ReadLine().ToCharArray();

for (int ok = 1; ok <= t; ok++) {
 for (var i = 0; i <= s.Length-2; i++) {
  if (s[i] == 'B' && s[i+1] == 'G') {
   s[i] = 'G'; 
   s[i+1] = 'B';
   i++;
} 
} 
}

Console.WriteLine(new string(s));
