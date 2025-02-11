# samantha naranjo, strings notes phyton

# a string is a data type that holds info surrounded by quotation marks " " ''

# a bug is an error and a debug is the thing that makes the error go away

#print("this is your name "+ name)

sentence = "The quick brown fox jumps over the lazy dog"

#print(len(sentence))
#print(sentence[4])
print(sentence.find("brown fox"))
print(sentence[10:19])
start = sentence.find("brown")
legth = len("brown fox")
print(sentence[start:start+legth])