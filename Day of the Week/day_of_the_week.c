char *dayOfTheWeek(int day, int month, int year) {
    // Zeller's Congruence algorithm
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + 13*(month+1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return days[(h + 6) % 7];
}