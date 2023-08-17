int Sum = int.Parse(Console.ReadLine()!);
int Amount = 0;
foreach (var Bill in new int[] {100, 20, 10, 5, 1})
{
    if (Sum == 0)
        break;
    Amount += Sum / Bill;
    Sum %= Bill;
}
Console.WriteLine(Amount);
