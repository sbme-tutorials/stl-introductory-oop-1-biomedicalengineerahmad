#ifndef DNA_HPP
#define DNA_HPP

namespace dna
{

char complementaryBase(char base)
{
    // Copy from assignment 3
}

char *complementarySequence(char *base, int size)
{
    // Copy from assignment 3
}

int countChar(char *base, int size, char test)
{
    // Copy from assignment 3
}

struct DNA
{
    char *base;
    int size;
};

char *complementarySequence( DNA &dna )
{
    // DRY solution
    return complementarySequence( dna.base, dna.size );
}

int countChar( DNA &dna, char test)
{
    // DRY solution
    return countChar( dna.base, dna.size, test);
}


} // namespace dna

#endif