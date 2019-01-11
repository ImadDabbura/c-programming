/* convert c to lower case; ASCII only */
/* it uses conditional expressions instead of if-else */
int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A': c;
}
