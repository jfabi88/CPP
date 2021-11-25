#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>

template <class T, class Alloc>
class FtVector
{
/**-*-*-*-*-MEMBERS TYPE-*-*-*-*-**/
    typedef typename Alloc::value_type value_type;
    typedef typename Alloc allocator_type;
    typedef typename Alloc::reference reference;
    typedef typename Alloc::const_reference const_reference;
    typedef typename Alloc::pointer pointer;
    typedef typename Alloc::const_pointer const_pointer;
    class FtIterator {
        typedef typename std::random_access_FtIterator_tag FtIterator_category;
        typedef typename Alloc::value_type value_type;
        typedef typename Alloc::difference_type difference_type;
        typedef typename Alloc::pointer pointer;
        typedef typename Alloc::reference reference;

        public:
            FtIterator();
            FtIterator(const FtIterator&);
            ~FtIterator();

            FtIterator& operator=(const FtIterator&);

            bool operator==(const FtIterator&) const;
            bool operator!=(const FtIterator&) const;
            bool operator>(const FtIterator&) const;
            bool operator<(const FtIterator&) const;
            bool operator>=(const FtIterator&) const;
            bool operator<=(const FtIterator&) const;

            FtIterator &operator++();
            FtIterator operator++(int);
            FtIterator &operator--();
            FtIterator operator--(int);
            FtIterator &operator+=(int);
            FtIterator operator+(int) const;
            FtIterator &operator-=(int);
            FtIterator operator-(int) const;

            difference_type operator-(FtIterator) const;

            reference operator*() const;
            pointer operator->() const;
            reference operator[](int) const;
        private:
            reference point;
    };
    class const_FtIterator {
        typedef typename std::random_access_FtIterator_tag FtIterator_category;
        typedef typename Alloc::value_type value_type;
        typedef typename Alloc::difference_type difference_type;
        typedef typename Alloc::pointer pointer;
        typedef typename Alloc::reference reference;

        const_FtIterator();
        const_FtIterator(const const_FtIterator&);
        const_FtIterator(const FtIterator&);
        ~const_FtIterator();

        const_FtIterator& operator=(const const_FtIterator&);

        bool operator==(const const_FtIterator&) const;
        bool operator!=(const const_FtIterator&) const;
        bool operator>(const const_FtIterator&) const;
        bool operator<(const const_FtIterator&) const;
        bool operator>=(const const_FtIterator&) const;
        bool operator<=(const const_FtIterator&) const;

        const_FtIterator &operator++();
        const_FtIterator operator++(int);
        const_FtIterator &operator--();
        const_FtIterator operator--(int);
        const_FtIterator &operator+=(int);
        const_FtIterator operator+(int) const;
        const_FtIterator &operator-=(int);
        const_FtIterator operator-(int) const;

        difference_type operator-(const_FtIterator) const;

        reference operator*() const;
        pointer operator->() const;
        reference operator[](int) const;
    };
    class reverse_FtIterator
    {
        typedef typename std::random_access_FtIterator_tag FtIterator_category;
        typedef typename Alloc::value_type value_type;
        typedef typename Alloc::difference_type difference_type;
        typedef typename Alloc::pointer pointer;
        typedef typename Alloc::reference reference;

        reverse_FtIterator();
        reverse_FtIterator(const reverse_FtIterator&);
        ~reverse_FtIterator();

        const reverse_FtIterator& operator=(const reverse_FtIterator&);

        bool operator==(const reverse_FtIterator&) const;
        bool operator!=(const reverse_FtIterator&) const;
        bool operator>(const reverse_FtIterator&) const;
        bool operator<(const reverse_FtIterator&) const;
        bool operator>=(const reverse_FtIterator&) const;
        bool operator<=(const reverse_FtIterator&) const;

        reverse_FtIterator &operator++();
        reverse_FtIterator operator++(int);
        reverse_FtIterator &operator--();
        reverse_FtIterator operator--(int);
        reverse_FtIterator &operator+=(int);
        reverse_FtIterator operator+(int) const;
        reverse_FtIterator &operator-=(int);
        reverse_FtIterator operator-(int) const;

        difference_type operator-(reverse_FtIterator) const;

        reference operator*() const;
        pointer operator->() const;
        reference operator[](int) const;      
    };
    class const_reverse_FtIterator
    {
        typedef typename std::random_access_FtIterator_tag FtIterator_category;
        typedef typename Alloc::value_type value_type;
        typedef typename Alloc::difference_type difference_type;
        typedef typename Alloc::pointer pointer;
        typedef typename Alloc::reference reference;

        const_reverse_FtIterator();
        const_reverse_FtIterator(const const_reverse_FtIterator&);
        const_reverse_FtIterator(const reverse_FtIterator&);
        ~const_reverse_FtIterator();

        const const_reverse_FtIterator& operator=(const const_reverse_FtIterator&);

        bool operator==(const const_reverse_FtIterator&) const;
        bool operator!=(const const_reverse_FtIterator&) const;
        bool operator>(const const_reverse_FtIterator&) const;
        bool operator<(const const_reverse_FtIterator&) const;
        bool operator>=(const const_reverse_FtIterator&) const;
        bool operator<=(const const_reverse_FtIterator&) const;

        const_reverse_FtIterator &operator++();
        const_reverse_FtIterator operator++(int);
        const_reverse_FtIterator &operator--();
        const_reverse_FtIterator operator--(int);
        const_reverse_FtIterator &operator+=(int);
        const_reverse_FtIterator operator+(int) const;
        const_reverse_FtIterator &operator-=(int);
        const_reverse_FtIterator operator-(int) const;

        difference_type operator-(const_reverse_FtIterator) const;

        reference   operator*() const;
        pointer     operator->() const;
        reference   operator[](int) const;      
    };
    typedef typename Alloc::difference_type difference_type;
    typedef typename Alloc::size_type size_type;

/**-*-*-*-*-MEMBERS FUNCTIONS-*-*-*-*-**/
    FtVector();
    ~FtVector();
    FtVector &operator=(const FtVector&);

    //--------FtIterators--------//
    FtIterator                begin();
    const_FtIterator          begin() const;
    FtIterator                end();
    const_FtIterator          end() const;
    reverse_FtIterator        rbegin();
    const_reverse_FtIterator  rbegin() const;
    reverse_FtIterator        rend();
    const_reverse_FtIterator  rend() const;

    //---------CAPACITY----------//
    size_type   size() const;
    size_type   max_size() const;
    void        resize(size_type n);
    void        resize(size_type n, value_type val = value_type());
    size_type   capacity() const;
    bool        empty() const;
    void        reserve(size_type n);

    //-------ELEMENT ACCESS------//
    reference       operator[] (size_type n);
    const_reference operator[] (size_type n) const;
    reference       at (size_type n);
    const_reference at (size_type n) const;
    reference       front();
    const_reference front() const;
    reference       back();
    const_reference back() const;

    //---------MODIFIERS---------//
    template <class InputFtIterator>
    void        assign (InputFtIterator first, InputFtIterator last);
    void        assign (size_type n, const value_type& val);
    void        push_back (const value_type& val);
    void        pop_back();
    FtIterator    insert (FtIterator position, const value_type& val);
    void        insert (FtIterator position, size_type n, const value_type& val);
    template <class InputFtIterator>
    void        insert (FtIterator position, InputFtIterator first, InputFtIterator last);
    FtIterator    erase (FtIterator position);
    FtIterator    erase (FtIterator first, FtIterator last);
    void        swap(FtVector& x);
    void        clear();

    //---------ALLOCATOR---------//
    allocator_type get_allocator() const;
};

/**-*-*-*-*-NON MEMBERS FUNCTIONS-*-*-*-*-**/

template <class T, class Alloc>
bool    operator== (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
bool    operator!= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
bool    operator<  (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
bool    operator>  (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
bool    operator<= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
bool    operator>= (const FtVector<T,Alloc>& lhs, const FtVector<T,Alloc>& rhs);
template <class T, class Alloc>
void    swap(FtVector<T, Alloc>& x, FtVector<T, Alloc>& y);

#endif
