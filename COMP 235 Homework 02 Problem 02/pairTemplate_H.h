//
//  Pair.hpp
//  COMP 235 Homework 02 Problem 02
//
//  Created by ax on 2/7/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef pairTemplate_H
#define pairTemplate_H

template<class T1, class T2>
class Pair {
public:
    typedef T1 value_type_1;
    typedef T2 value_type_2;
    Pair(); // construtor default
    Pair(T1 p_first, T2 p_second);     // accessors
    T1 first();
    T2 second();
    // mutators
    void setValuesToPair(T1 p_first, T2 p_second);
private:
    T1 m_first;
    T2 m_second;
};

#endif /* pairTemplate_H */
