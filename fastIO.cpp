#include <bits/stdc++.h>
using namespace std;
#define endl cerr<<"------------------I Love Chtholly Tree------------------\n";
#define int long long
#define pan(x) isdigit(x)

namespace FastIO {
    const int MAXX = 1 << 20;
    struct r {
        unsigned char buf[MAXX], *head, *till;
        r() : head(buf), till(buf) {}
        inline char gc() { if (head == till) { till = (head = buf) + fread(buf, 1, MAXX, stdin); if (head == till) return EOF; } return *head++; }
        template<typename T> inline void re(T& x) { bool neg = 0; x = 0; char now = gc(); while (now != '-' && !pan(now)) now = gc(); if (now == '-') neg = 1, now = gc(); while (pan(now)) { x = x * 10 + (now - '0'); now = gc(); } if (neg) x = -x; }
        inline void re(char& ch) { ch = gc(); while (ch == '\r' || ch == '\n' || ch == ' ') ch = gc(); }
        inline void re(char* s) { char ch = gc(); while (ch == '\r' || ch == '\n' || ch == ' ') ch = gc(); while (ch != '\r' && ch != '\n' && ch != ' ' && ch != EOF) *s++ = ch, ch = gc(); *s = 0; }
        inline void re(string& s) { s.clear(); char ch = gc(); while (ch == '\r' || ch == '\n' || ch == ' ') ch = gc(); while (ch != '\r' && ch != '\n' && ch != ' ' && ch != EOF) s.push_back(ch), ch = gc(); }
        template<typename T> r& operator>>(T& x) { re(x); return *this; }
    };
    struct w {
        unsigned char buf[MAXX], *head;
        w() :head(buf) {}
        ~w() { flush(); }
        inline void flush() { if (head != buf) { fwrite(buf, 1, head - buf, stdout); head = buf; } }
        inline void pc(char ch) { if (head - buf == MAXX) { fwrite(buf, 1, MAXX, stdout); head = buf; } *head++ = ch; }
        inline void wr(int x) { if (x < 0) { pc('-'); x = -x; } static char buuf[40]; int len = 0; do { buuf[len++] = x % 10 + '0'; x /= 10; } while (x); while (len--) pc(buuf[len]); }
        inline void wr(char ch) { pc(ch); }
        inline void wr(const char* s) { while (*s) pc(*s++); }
        inline void wr(const string& s) { for (char ch : s) pc(ch); }
        template<typename T> w& operator<<(T x) { wr(x); return *this; }
    };
    r in;
    w out;
}using FastIO::in;
using FastIO::out;
#undef pan

signed main() {

    return 0;
}
