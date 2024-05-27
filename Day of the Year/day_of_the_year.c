int dayOfYear(char* date) {
    int nb=0;
    int month=atoi(date+5),day=atoi(date+8),year=atoi(date);
    int days_in_month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total=0;
    if(year%400==0||year%4==0&&year%100!=0)
        days_in_month[1]++;
    for (int i=0;i<month-1;i++)
        total+=days_in_month[i];
    return total+day;
}