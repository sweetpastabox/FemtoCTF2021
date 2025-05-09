FROM golang:1.24.3-alpine
ENV FLAG="THIS IS NOT THE FLAG..."
RUN mkdir /app
WORKDIR /app
COPY services .
COPY libflag.so /lib/
EXPOSE 8086
CMD ["./services"]