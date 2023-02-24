/**
 * Author: Lukas Polacek
 * Date: 2009-10-30
 * License: CC0
 * Source: folklore/TopCoder
 * Description: Computes partial sums a[0] + a[1] + ... + a[pos - 1], and updates single elements a[i],
 * taking the difference between the old and new value.
 * Time: Both operations are $O(\log N)$.
 * Status: Stress-tested
 */
#pragma once

template<class T>
struct BIT{
    int n;vector<T>t;
    BIT(int _n){
        n=_n;t.resize(n);
    }void update(int i,T k){
        while(i<n){
            t[i]+=k;
            i+=i&-i;
        }
    }T pref(int i){
        int res=0;
        while(i>0){
            res+=t[i];
            i-=i&-i;
        }return res;
    }T query(int l,int r){
        return pref(r)-pref(l-1);
    }
};
