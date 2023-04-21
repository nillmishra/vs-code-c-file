int main(int argc, char const *argv[])
{
    int l, b, area , perimeter;
    printf ("Enter the length value : ");
    scanf("%d", &l);
    printf ("Enter the breadth value : ");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        printf("area is greater\n");
        printf("your area is %d\n", area);
        printf("your perimeter is %d\n", perimeter);

    }
    else 
    {
        printf("preimeter is greater\n");
        printf("your area is %d\n", area);
        printf("your perimeter is %d\n", perimeter);
    }
        return 0;
}
