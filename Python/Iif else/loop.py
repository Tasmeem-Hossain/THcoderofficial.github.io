# converts a badly formatted list of names into ones that are as they should be.

# Initialise the lists needed.
bad_names = ['LIZZY ADAMS', 'jon smith', 'zIA ibrHIm', 'mia aleksy']
good_names = []

# Go through the list of bad names and convert them.
for name in bad_names:
    good_names.append(name.title())

# Finally, print out each of the lists.
print(bad_names)
print(good_names)