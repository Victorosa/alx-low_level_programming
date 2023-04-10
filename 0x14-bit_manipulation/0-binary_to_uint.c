    #include "main.h"

    /**
     * binary_to_uint - Converts a binary number to an unsigned int.
     * @b: Pointer to a string of 0 and 1 chars.
     *
     * Return: The converted number, or 0 if there is one or more chars in the string
     *         b that is not 0 or 1, or if b is NULL.
     */
    unsigned int binary_to_uint(const char *b)
      
    {
        unsigned int num;
        int a, c;

        if (b == NULL)
            return (0);
         a = 0;
        while (b[a + 1] != '\0')
		        a++;
        c = 1;
        num = 0;
        while (a >= 0)
       {
		if (b[a] != '1' && b[a] != '0')
			return (0);
		num += (b[a] - '0') * c;
		c *= 2;
		a--;
	}
	return (num);
}
