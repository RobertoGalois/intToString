#include    <iostream>
#include    <string>
#include    <sstream>

int     ft_intToString_better(int p_str)
{
    int                     ret(0);
    std::ostringstream      iss(ret);
    
    iss << p_str;
    return (ret);
        
}

int     main(void)
{
    std::cout << (ft_intToString_better(21)) + 21 << std::endl;    
    return (0);
}
