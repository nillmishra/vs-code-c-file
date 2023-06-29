int main()
{
    int r, c;
    printf("Enter the number of students: \n");
    scanf("%d", &r);
    printf("Enter the number of subjects: \n");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter a Roll no & Marks: \n");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n Roll No \t  Physics \t  Chemistry \t  Maths\n");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            printf("  %d               ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}