@echo off
setlocal
cd /d "%~dp0web"
where node >nul 2>nul
if errorlevel 1 (
  echo Node.js is required to start the web version.
  pause
  exit /b 1
)
if not exist node_modules\vite\bin\vite.js (
  call npm ci --no-audit --no-fund
  if errorlevel 1 exit /b 1
)
start "" http://127.0.0.1:5298/
call npm run dev
