int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    int count100 = 0, count20 = 0, count10 = 0, count5 = 0, count1 = 0,totalCount;
    count100 = a / 100;
    a = a % 100;
    count20 = a / 20;
    a = a % 20;
    count10 = a / 10;
    a = a % 10;
    count5 = a / 5;
    a = a % 5;
    count1 = a;
    totalCount = count100 + count20 + count10 + count5 + count1;
    
    printf(" %d\n", totalCount);

    return 0;
}
