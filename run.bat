@echo off
cd build
cmake --build .
raytracer.exe | powershell -command "$input | Out-File -Encoding ascii ..\image.ppm"
powershell -command "(Get-Content ..\image.ppm -Raw) -replace \"`r`n\", \"`n\" | Set-Content ..\image.ppm -Encoding ascii -NoNewline"
python -c "from PIL import Image; Image.open('../image.ppm').save('../image.png')"
echo Image saved to image.png
pause