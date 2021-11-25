#include "Vector.hpp"


//**ITERATOR**//

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::FtIterator(const FtIterator& copy)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::~FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator& FtVector<T, Alloc>::FtIterator::operator=(const FtIterator& copy)
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator==(const FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator!=(const FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator>(const FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator<(const FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator>=(const FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::FtIterator::operator<=(const FtIterator&) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator& FtVector<T, Alloc>::FtIterator::operator++()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::FtIterator::operator++(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator& FtVector<T, Alloc>::FtIterator::operator--()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::FtIterator::operator--(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator& FtVector<T, Alloc>::FtIterator::operator+=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::FtIterator::operator+(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator& FtVector<T, Alloc>::FtIterator::operator-=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::FtIterator::operator-(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::difference_type FtVector<T, Alloc>::FtIterator::operator-(FtIterator) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::reference FtVector<T, Alloc>::FtIterator::operator*() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::pointer FtVector<T, Alloc>::FtIterator::operator->() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::reference FtVector<T, Alloc>::FtIterator::operator[](int) const
{}

/**CONST ITERATOR**/

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::const_FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::const_FtIterator(const const_FtIterator&)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::const_FtIterator(const FtIterator&)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::~const_FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator& FtVector<T, Alloc>::const_FtIterator::operator=(const const_FtIterator& copy)
{}


template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator==(const const_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator!=(const const_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator>(const const_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator<(const const_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator>=(const const_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_FtIterator::operator<=(const const_FtIterator&) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator& FtVector<T, Alloc>::const_FtIterator::operator++()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::const_FtIterator::operator++(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator& FtVector<T, Alloc>::const_FtIterator::operator--()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::const_FtIterator::operator--(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator& FtVector<T, Alloc>::const_FtIterator::operator+=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::const_FtIterator::operator+(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator& FtVector<T, Alloc>::const_FtIterator::operator-=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::const_FtIterator::operator-(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::difference_type FtVector<T, Alloc>::const_FtIterator::operator-(const_FtIterator) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::reference FtVector<T, Alloc>::const_FtIterator::operator*() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::pointer FtVector<T, Alloc>::const_FtIterator::operator->() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator::reference FtVector<T, Alloc>::const_FtIterator::operator[](int) const
{}

//**REVERSE ITERATOR**//

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::reverse_FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::reverse_FtIterator(const reverse_FtIterator&)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::~reverse_FtIterator()
{}

template <class T, class Alloc>
const FtVector<T, Alloc>::reverse_FtIterator& FtVector<T, Alloc>::reverse_FtIterator::operator=(const reverse_FtIterator&)
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator==(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator!=(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator>(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator<(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator>=(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::reverse_FtIterator::operator<=(const reverse_FtIterator&) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator& FtVector<T, Alloc>::reverse_FtIterator::operator++()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::reverse_FtIterator::operator++(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator& FtVector<T, Alloc>::reverse_FtIterator::operator--()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::reverse_FtIterator::operator--(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator& FtVector<T, Alloc>::reverse_FtIterator::operator+=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::reverse_FtIterator::operator+(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator& FtVector<T, Alloc>::reverse_FtIterator::operator-=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::reverse_FtIterator::operator-(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::difference_type FtVector<T, Alloc>::reverse_FtIterator::operator-(reverse_FtIterator) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::reference FtVector<T, Alloc>::reverse_FtIterator::operator*() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::pointer FtVector<T, Alloc>::reverse_FtIterator::operator->() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator::reference FtVector<T, Alloc>::reverse_FtIterator::operator[](int) const
{}

//*_*_*_*_*_*MEMBER FUNCTIONS*_*_*_*_*_*//

template <class T, class Alloc>
FtVector<T, Alloc>::FtVector()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::~FtVector()
{}

template <class T, class Alloc>
FtVector<T, Alloc>& FtVector<T, Alloc>::operator=(const FtVector &copy)
{}

//---------FtIteratorS---------//
template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator  FtVector<T, Alloc>::begin()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::begin() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::end()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_FtIterator FtVector<T, Alloc>::end() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::rbegin()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::rbegin() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reverse_FtIterator FtVector<T, Alloc>::rend()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::rend() const
{}

//---------CAPACITY----------//

template <class T, class Alloc>
FtVector::size_type   size() const
{}

template <class T, class Alloc>
    syze_type   max_size() const
{}

template <class T, class Alloc>
    void        resize(size_type n);
    void        resize(size_type n, value_type val = value_type());
    syze_type   capacity() const;
    bool        empty() const;
    void        reserve(size_type n);