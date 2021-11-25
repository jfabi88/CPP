#include "Vector.hpp"

//*_*_*_*_*_*_*_*_*_*_*_*_*_*ITERATOR*_*_*_*_*_*_*_*_*_*_*_*_*//

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator::FtIterator(const FtIterator& copy)
{
    this->point = FtVector::begin();
}

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

/*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*CONST ITERATOR*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*/

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

//*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*REVERSE ITERATOR*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*//

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

//*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*CONST REVERSE ITERATOR*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*//

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::const_reverse_FtIterator()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::const_reverse_FtIterator(const const_reverse_FtIterator&)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::const_reverse_FtIterator(const reverse_FtIterator&)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::~const_reverse_FtIterator()
{}

template <class T, class Alloc>
const FtVector<T, Alloc>::const_reverse_FtIterator& FtVector<T, Alloc>::const_reverse_FtIterator::operator=(const const_reverse_FtIterator&)
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator==(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator!=(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator>(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator<(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator>=(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
bool FtVector<T, Alloc>::const_reverse_FtIterator::operator<=(const const_reverse_FtIterator&) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator& FtVector<T, Alloc>::const_reverse_FtIterator::operator++()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::const_reverse_FtIterator::operator++(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator &FtVector<T, Alloc>::const_reverse_FtIterator::operator--()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::const_reverse_FtIterator::operator--(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator &FtVector<T, Alloc>::const_reverse_FtIterator::operator+=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::const_reverse_FtIterator::operator+(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator &FtVector<T, Alloc>::const_reverse_FtIterator::operator-=(int)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator FtVector<T, Alloc>::const_reverse_FtIterator::operator-(int) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::difference_type FtVector<T, Alloc>::const_reverse_FtIterator::operator-(const_reverse_FtIterator) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::reference FtVector<T, Alloc>::const_reverse_FtIterator::operator*() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::pointer FtVector<T, Alloc>::const_reverse_FtIterator::operator->() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reverse_FtIterator::reference FtVector<T, Alloc>::const_reverse_FtIterator::operator[](int) const
{}

//*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*MEMBER FUNCTIONS*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*//

template <class T, class Alloc>
FtVector<T, Alloc>::FtVector()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::~FtVector()
{}

template <class T, class Alloc>
FtVector<T, Alloc>& FtVector<T, Alloc>::operator=(const FtVector &copy)
{}

//--------FtIterators--------//
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
FtVector<T, Alloc>::size_type FtVector<T, Alloc>::size() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::size_type   FtVector<T, Alloc>::max_size() const
{}

template <class T, class Alloc>
void        FtVector<T, Alloc>::resize(size_type n)
{}

template <class T, class Alloc>
void        FtVector<T, Alloc>::resize(size_type n, value_type val = value_type())
{}

template <class T, class Alloc>
FtVector<T, Alloc>::size_type   FtVector<T, Alloc>::capacity() const
{}

template <class T, class Alloc>
bool        FtVector<T, Alloc>::empty() const
{}

template <class T, class Alloc>
void        FtVector<T, Alloc>::reserve(size_type n)
{}

//-------ELEMENT ACCESS------//

template <class T, class Alloc>
FtVector<T, Alloc>::reference FtVector<T, Alloc>::operator[] (size_type n)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reference FtVector<T, Alloc>::operator[] (size_type n) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reference FtVector<T, Alloc>::at(size_type n)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reference FtVector<T, Alloc>::at(size_type n) const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reference FtVector<T, Alloc>::front()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reference FtVector<T, Alloc>::front() const
{}

template <class T, class Alloc>
FtVector<T, Alloc>::reference FtVector<T, Alloc>::back()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::const_reference FtVector<T, Alloc>::back() const
{}

//---------MODIFIERS---------//

template <class T, class Alloc>
template <class InputFtIterator>
void FtVector<T, Alloc>::assign (InputFtIterator first, InputFtIterator last)
{}

template <class T, class Alloc>
void FtVector<T, Alloc>::assign (size_type n, const value_type& val)
{}

template <class T, class Alloc>
void FtVector<T, Alloc>::push_back (const value_type& val)
{}

template <class T, class Alloc>
void FtVector<T, Alloc>::pop_back()
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::insert (FtIterator position, const value_type& val)
{}

template <class T, class Alloc>
void        FtVector<T, Alloc>::insert (FtIterator position, size_type n, const value_type& val)
{}

template <class T, class Alloc>
template <class InputFtIterator>
void FtVector<T, Alloc>::insert (FtIterator position, InputFtIterator first, InputFtIterator last)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::erase (FtIterator position)
{}

template <class T, class Alloc>
FtVector<T, Alloc>::FtIterator FtVector<T, Alloc>::erase (FtIterator first, FtIterator last)
{}

template <class T, class Alloc>
void FtVector<T, Alloc>::swap(FtVector& x)
{}

template <class T, class Alloc>
void FtVector<T, Alloc>::clear()
{}

//---------ALLOCATOR---------//

template <class T, class Alloc>
FtVector<T, Alloc>::allocator_type FtVector<T, Alloc>::get_allocator() const
{}

/**_*_*_*_*_*_*_*_*_*_*NON MEMBERS FUNCTIONS*_*_*_*_*_*_*_*_*_**/

template <class T, class Alloc>
bool    operator== (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
bool    operator!= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
bool    operator<  (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
bool    operator>  (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
bool    operator<= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
bool    operator>= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs)
{}

template <class T, class Alloc>
void    swap(FtVector<T, Alloc>& x, FtVector<T, Alloc>& y)
{}
