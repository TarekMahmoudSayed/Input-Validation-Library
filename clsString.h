#pragma once

#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

class clsString {

	string _Value;

	static char InvertingLetterCase(char c) {

		return char(isupper(c) ? towlower(c) : toupper(c));

	}

	static bool isVowel(char letter) {

		letter = tolower(letter);

		return (letter == 'a' || letter == 'e' || letter == 'o' || letter == 'u' || letter == 'i');

	}

	static vector<string> ReversingVector(vector<string> V) {

		reverse(V.begin(), V.end());

		return V;

	}

public:

	clsString() {
		_Value = "";
	}

	clsString(string Value) {
		_Value = Value;
	}

	void setValue(string Value) {
		_Value = Value;
	}

	string getValue() {
		return _Value;
	}

	clsString& operator=(const string& Value) {
		_Value = Value;
		return *this;
	}

	operator string() const {
		return _Value;
	}

	static void printFirstLettersOfString(string s) {

		bool isFirstLetter = true;

		for (size_t i = 0; i < s.size(); ++i) {

			if (s[i] != ' ' && isFirstLetter) {
				cout << s[i] << endl;
			}

			isFirstLetter = (s[i] == ' ' ? true : false);

		}

	}

	void printFirstLettersOfString() {
		return printFirstLettersOfString(_Value);
	}

	static string UpperFirstLetterOfEachWord(string s) {

		bool isFirstLetter = true;

		for (size_t i = 0; i < s.size(); ++i) {

			if (s[i] != ' ' && isFirstLetter) {

				s[i] = char(toupper(s[i]));

			}

			isFirstLetter = (s[i] == ' ' ? true : false);

		}

		return s;

	}

	string UpperFirstLetterOfEachWord() {
		_Value = UpperFirstLetterOfEachWord(_Value);
		return _Value;
	}

	static string LowerFirstLetterOfEachWord(string s) {

		bool isFirstLetter = true;

		for (size_t i = 0; i < s.size(); ++i) {

			if (s[i] != ' ' && isFirstLetter) {

				s[i] = char(tolower(s[i]));

			}

			isFirstLetter = (s[i] == ' ' ? true : false);

		}

		return s;

	}

	string LowerFirstLetterOfEachWord() {
		_Value = LowerFirstLetterOfEachWord(_Value);
		return _Value;
	}

	static string UpperAllString(string s) {

		for (size_t i = 0; i < s.length(); ++i) {

			s[i] = toupper(s[i]);

		}

		return s;

	}

	string UpperAllString() {
		_Value = UpperAllString(_Value);
		return _Value;
	}

	static string LowerAllString(string s) {

		for (size_t i = 0; i < s.length(); ++i) {

			s[i] = tolower(s[i]);

		}

		return s;

	}

	string LowerAllString() {
		_Value = LowerAllString(_Value);
		return _Value;
	}

	static string InvertingAllLettersCase(string s) {

		for (size_t i = 0; i < s.length(); ++i) {

			s[i] = InvertingLetterCase(s[i]);

		}

		return s;

	}

	string InvertingAllLettersCase() {
		_Value = InvertingAllLettersCase(_Value);
		return _Value;
	}

	static size_t CountCapitalLetters(string s) {

		size_t Count = 0;

		for (size_t i = 0; i < s.length(); ++i) {

			if (isupper(s[i])) {
				Count++;
			}

		}

		return Count;

	}

	size_t CountCapitalLetters() {
		return CountCapitalLetters(_Value);
	}

	static size_t CountSmallLetters(string s) {

		size_t Count = 0;

		for (size_t i = 0; i < s.length(); ++i) {

			if (islower(s[i])) {
				Count++;
			}

		}

		return Count;

	}

	size_t CountSmallLetters() {
		return CountSmallLetters(_Value);
	}

	static size_t CountLetterInString(string s, char Letter, bool MatchCase = true) {

		size_t Count = 0;

		for (size_t i = 0; i < s.length(); ++i) {

			if (MatchCase) {

				if (s[i] == Letter) {
					Count++;
				}

			}
			else {

				if (tolower(s[i]) == tolower(Letter)) {
					Count++;
				}

			}

		}

		return Count;

	}

	size_t CountLetterInString(char c, bool MatchCase = true) {
		return CountLetterInString(_Value, c, MatchCase);
	}

	static size_t CountVowel(string s) {

		size_t Counter = 0;

		for (size_t i = 0; i < s.length(); ++i) {

			if (isVowel(s[i])) {
				Counter++;
			}

		}

		return Counter;

	}

	size_t CountVowel() {
		return CountVowel(_Value);
	}

	static void PrintVowelsInString(string s) {

		for (size_t i = 0; i < s.length(); ++i) {

			if (isVowel(s[i])) {
				cout << s[i] << " ";
			}

		}

	}

	void PrintVowelsInString() {
		PrintVowelsInString(_Value);
	}

	static void PrintEachWordInString(string S) {

		string delim = " ";

		size_t Pos = 0;
		string sWord;

		while ((Pos = S.find(delim)) != string::npos) {

			sWord = S.substr(0, Pos);

			if (sWord != " ") {
				cout << sWord << endl;
			}

			S.erase(0, Pos + delim.length());

		}

		if (S != " ") {
			cout << S << endl;
		}

	}

	void PrintEachWordInString() {
		PrintEachWordInString(_Value);
	}

	static vector<string> SplitString(string s, string delim = " ") {

		vector<string>vString;

		size_t pos = 0;

		string Token;

		while ((pos = s.find(delim)) != string::npos) {

			Token = s.substr(0, pos);

			if (Token != " ") {
				vString.push_back(Token);
			}

			s.erase(0, pos + delim.length());

		}

		if (s != " ") {
			vString.push_back(s);
		}

		return vString;

	}

	vector<string> SplitString(string delim = " ") {
		return SplitString(_Value, delim);
	}

	static string TrimLeft(string s) {

		for (size_t i = 0; i < s.length(); ++i) {

			if (s[i] != ' ') {
				return s.substr(i, s.length() - i);
			}

		}

		return "";

	}

	string TrimLeft() {
		_Value = TrimLeft(_Value);
		return _Value;
	}

	static string TrimRight(string s) {

		for (size_t i = s.length(); i > 0; --i) {

			if (s[i - 1] != ' ') {
				return s.substr(0, i);
			}

		}

		return "";

	}

	string TrimRight() {
		_Value = TrimRight(_Value);
		return _Value;
	}

	static string Trim(string s) {

		return (TrimLeft(TrimRight(s)));

	}

	string Trim() {
		_Value = Trim(_Value);
		return _Value;
	}

	string JoinStrings(vector<string> JoinVector, string Delim = " ") {

		string S = "";

		for (size_t i = 0; i < JoinVector.size(); ++i) {

			S += JoinVector[i];

			if (i != (JoinVector.size() - 1)) {
				S += Delim;
			}

		}

		return S;

	}

	string JoinStrings(string Array[], size_t Length, string Delim) {

		string S = "";

		for (size_t i = 0; i < Length; ++i) {

			S += Array[i] + Delim;

		}

		return (S.substr(0, S.length() - Delim.length()));

	}

	static string ReverseWordsinString(string S) {

		vector<string> vec = SplitString(S, " ");

		string ReversedString = "";

		vector<string>::iterator iter = vec.end();

		while (iter != vec.begin()) {

			iter--;

			ReversedString += *iter + " ";

		}

		return (ReversedString.substr(0, ReversedString.length() - 1));

	}

	string ReverseWordsinString() {
		_Value = ReverseWordsinString(_Value);
		return _Value;
	}

	static string ReplaceWordInStringUsingBuiltInFunction(string s1, string StringReplaceTo, string ReplceTo) {

		size_t Pos = s1.find(StringReplaceTo);

		while (Pos != string::npos) {

			s1.replace(Pos, StringReplaceTo.length(), ReplceTo);

			Pos = s1.find(StringReplaceTo, Pos + ReplceTo.length());

		}

		return s1;

	}

	string ReplaceWordInStringUsingBuiltInFunction(string StringReplaceTo, string ReplceTo) {
		_Value = ReplaceWordInStringUsingBuiltInFunction(_Value, StringReplaceTo, ReplceTo);
		return _Value;
	}

	string ReplaceWordInString(string S, string StringReplaceTo, string ReplaceTo, bool MatchCase = true) {

		vector<string> vec = SplitString(S, " ");

		if (MatchCase) {

			for (string& s : vec) {

				if (s == StringReplaceTo) {
					s = ReplaceTo;
				}

			}

		}
		else {

			for (string& s : vec) {

				if (LowerAllString(s) == LowerAllString(StringReplaceTo)) {
					s = ReplaceTo;
				}

			}

		}

		return (JoinStrings(vec, " "));

	}

	string ReplaceWordInString(string StringReplaceTo, string ReplceTo, bool MatchCase = true) {
		_Value = ReplaceWordInString(_Value, StringReplaceTo, ReplceTo, MatchCase);
		return _Value;
	}

};
