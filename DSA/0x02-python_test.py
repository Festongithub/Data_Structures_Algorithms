#!/usr/bin/pyhton3
import sys
print(sys.version)

def greeting(language):
    chosen_language = language.capitalize()
    match chosen_language:
        case 'English':
            print('Hello')
        case 'German':
            print('Hallo!')
            
greeting('english')
