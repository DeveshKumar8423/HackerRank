#String Split and Join
def split_and_join(line):
    splitline = line.split()
    joinline = "-".join(splitline)
    return joinline
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
