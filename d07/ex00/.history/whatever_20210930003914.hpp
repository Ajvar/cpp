template <typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T const &a, T const &b)
{
	if (a < b)
		return a;
	else if (a == b)
}