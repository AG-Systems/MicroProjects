html = """
<!doctype html>
<html lang="en-US">
<head>
    <meta charset="UTF-8">
    <title></title>
</head>
<body>
<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.10.1/jquery.min.js"></script>
<script src="http://ajax.googleapis.com/ajax/libs/jquery/2.0.1/jquery.min.js"></script>
</body>
</html>
"""

import re

find = re.compile(r'src="[^"]*"')

print find.sub('src="changed"', html)
