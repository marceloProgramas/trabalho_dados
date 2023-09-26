from tabulate import tabulate;

table = [["pablo", "durante"], ["wesley", "almeida"], ["marcelo", "junior"], ["joão", "santos"]]
print(tabulate(table, headers=['first name', 'last name'], tablefmt='grid'))