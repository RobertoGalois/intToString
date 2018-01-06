std::string		intToString(int	nb)
{
	std::string		ret("");
	std::string		temp;
	char			digit[1];
	int				magnitude(1);

	if (nb == 0)
	{
		ret = "0";
		return (ret);
	}

	if (nb < 0)
	{
		ret.push_back('-');
		nb = (nb * (-1));
	}

	while ((nb / magnitude) > 0)
		magnitude *= 10;

	magnitude /= 10;
	while (magnitude > 0)
	{
		digit[0] = (nb / magnitude);
		nb = (nb % magnitude);
		ret.push_back(48 + digit[0]);
		magnitude /= 10;
	}

	return (ret);
}
