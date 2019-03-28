#ifndef DNA_HPP
#define DNA_HPP

namespace dna
{
    char complementaryBase( char base )
    {
        if (base == 'T')
        {
            return 'A' ;
        }
        else if (base == 'A')
        {
            return 'T' ;
        }
        else if (base == 'C')
        {
            return 'G' ;
        }
        else if (base == 'G')
        {
            return 'C' ;
        }
        else
        {
            return 0 ;
        }
    }
    char *complementarySequence (char *base , int size )
    {
        char *compl_sequence= new char [size] ;
        int index = 0;                                          // A counter for the returned array
        for (int i = size-1 ; i >= 0 ; --i )                      // An inverted counter for the base
        {
            compl_sequence[index] = complementaryBase(base[i]);
            ++index ;
        }
        return compl_sequence ;

    }
    int countCharacter (char *base , int size , char query )
    {
        int count  = 0 ;
        for (int i = 0 ; i < size ; ++i )
        {
            if (base[i] == query )
            {
                ++ count ;
            }
        }
        return count ;
    }

} // namespace dna

#endif