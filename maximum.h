/* 
 * File:   maximum.h
 * Author: Andrei Popescu-Belis
 * Scope: demonstrate the use of templates with 
 * declaration and definition in header file
 * Created on 6. mars 2019, 08:59
 */

#ifndef MAXIMUM_H
#define MAXIMUM_H

template <typename T> T maximum(T x, T y) {
    return (x>y)?x:y;
}

#endif /* MAXIMUM_H */

