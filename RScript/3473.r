input <- file('stdin', 'r')

a <- as.integer(readLines(input, n=1))
p = a + 1
write(paste(p), '')