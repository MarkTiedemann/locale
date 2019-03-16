# locale [![Build status](https://ci.appveyor.com/api/projects/status/s25yr2mop3bwjvh2?svg=true)](https://ci.appveyor.com/project/MarkTiedemann/locale)

**Print the Windows system locale.**

Built for [`os-locale`](https://github.com/sindresorhus/os-locale).

## Installation

Download the binary from [releases](https://github.com/MarkTiedemann/locale/releases).

## Usage

```batch
:: If Windows Vista or greater
$ locale
{"locale":"en-US"}

:: Else
$ locale
{"lcid":1033}

```

## License

MIT
