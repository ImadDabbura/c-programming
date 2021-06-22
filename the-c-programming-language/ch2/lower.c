/* convert c to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';        /* since ASCII alphabets are contiguous */
    else
        return c;
}
