FROM golang:1.19.11-alpine
ENV FLAG="THIS IS NOT THE FLAG..."
RUN mkdir /app
WORKDIR /app
COPY services .
COPY libflag.so /lib/
EXPOSE 8086
CMD ["./services"]