#ifndef STATEPAIR
#define STATEPAIR

template<typename T1, typename T2>
class StatePair {
private:
   T1 Key;
   T2 Value;
public:
// TODO: Define constructors
   StatePair(void);
   StatePair(T1 userKey, T2 userValue);
   
// TODO: Define mutators, and accessors for StatePair
   void SetKey(T1 userKey);
   T1 GetKey();
   T2 GetValue();
   void SetValue(T2 userValue);
   void PrintInfo();
};

template <typename T1, typename T2>
StatePair<T1, T2>::StatePair() {}
template<typename T1, typename T2>
StatePair<T1, T2>::StatePair(T1 userKey, T2 userValue) {
   Key = userKey;
   Value = userValue;
}

template <typename T1, typename T2>
void StatePair<T1, T2>::SetKey(T1 userKey) {
   Key = userKey;
}

template <typename T1, typename T2>
T1 StatePair<T1, T2>::GetKey() {
   return Key;
}
template <typename T1, typename T2>
T2 StatePair<T1, T2>::GetValue() {
	return Value;
}
template <typename T1, typename T2>
void StatePair<T1, T2>::SetValue(T2 userValue) {
	Value = userValue;
}
template <typename T1, typename T2>
void StatePair<T1, T2>::PrintInfo() {
   std::cout << Key << ": " << Value << std::endl;
}

#endif
