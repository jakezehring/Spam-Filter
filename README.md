Note: I cant get this dumb readme to look normal, just open up the file

UML:

class Word
*string m_name
*int number_in_spam
*int number_in_ham
+word(string name)
+void increment_ham()
+void increment_spam()
+int return_ham()
+int return_spam()
+string return_name()


class Classifier
*vector <word> dictonary (or set if phil wants)
*ifile spam
*ifile ham
*int total_spam
*int total_ham
+classifier(string ham, string spam)
+void count_each_word()
+int lookup_ham(string target)
+int lookup_spam(string target)
+int return_total()
+int return_total_spam()
+int return_total_ham()
