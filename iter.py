"""python program to generate sequence upto a given charactor length"""
import hashlib,sys

alphabets="abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def iter(st,n):
	for i in range(62):
		if(n==0):
			print st
			st=""
			return 0
		elif(n>0):
			iter(st+alphabets[i],n-1)

def new(n):
	st=''
	for i in range(0,n):
		print "Checking with %d letter words..."%i
		iter(st,i)	


new(5)
