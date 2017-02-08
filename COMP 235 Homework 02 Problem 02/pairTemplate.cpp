//
//  Pair.cpp
//  COMP 235 Homework 02 Problem 02
//
//  Created by ax on 2/7/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "pairTemplate_H.h"
// construtor default
template<>
Pair::Pair() {

}
template<class T1, class T2>
Pair::Pair<T1 p_first, T2 p_second) {

}
// constructor w params
// accessors
T1 Pair::first() {}
T2 Pair::second() {}
// mutators
void Pair::setValuesToPair(T1 p_first, T2 p_second) {
    
}

/*
private members:
T1 m_first;
T2 m_second;
*/
