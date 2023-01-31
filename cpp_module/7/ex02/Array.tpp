#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(): arrlen(0), arr(new T[0])
{
    std::cout<<"(default) success"<<std::endl;
}

template <typename T>
Array<T>::Array(Array &instance): arrlen(instance.arrlen), arr(new T[instance.arrlen])
{
    std::cout<<"(&) success"<<std::endl;
    for (unsigned int i = 0; i < instance.arrlen; i++)
        this->arr[i] = instance.arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &instance)
{
    std::cout<<"(=) success"<<std::endl;
    if (this == &instance)
		return *this;
	else
	{
		delete this->arr;
        this->arr = new T[instance.arrlen];
        for (unsigned int i = 0; i < instance.arrlen; i++)
            this->arr[i] = instance.arr[i];
        return *this;
	}
}

template <typename T>
Array<T>::~Array()
{
    std::cout<<"Destructor and delete"<<std::endl;
    delete []this->arr;
}

template <typename T>
Array<T>::Array(unsigned int n): arrlen(n), arr(new T[n])
{
    std::cout<<"(av = n) success"<<std::endl;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx)
{
    if (idx >= arrlen)
        throw RangeException();
    else
        return this->arr[idx];
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const
{
    if (idx >= arrlen)
        throw RangeException();
    else
        return this->arr[idx];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return this->arrlen;
}

template <typename T>
const char* Array<T>::RangeException::what() const throw()
{
    return ("Error: length of the array is over");
}

#endif